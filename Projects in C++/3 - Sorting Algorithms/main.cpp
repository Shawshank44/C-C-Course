#include <iostream> 

using namespace std;

void printArray (int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// Function to swap two elements 
void swap (int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

// Bubble sort
void bubbleSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j],arr[j + 1]);
            }
            
        }
    }
    
}

// Insertion sort :
void insertionSort(int arr[], int n){
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Selection sort :
void selectionSort(int arr[], int n){
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
            swap(arr[i],arr[minIndex]);
        }
        
    }
    
}


// Quick sort :
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Choose the last element as pivot
    int i = low - 1;  // Index of smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {  // If element is smaller than pivot
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);  // Place pivot at the right position
    return i + 1;  // Return pivot index
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);  // Sort left part
        quickSort(arr, pi + 1, high); // Sort right part
    }
}

// Heap sort :
void heapify(int arr[], int n, int i) {
    int largest = i;  // Root
    int left = 2 * i + 1;  // Left child
    int right = 2 * i + 2; // Right child

    if (left < n && arr[left] > arr[largest])  // Compare left child
        largest = left;
    
    if (right < n && arr[right] > arr[largest]) // Compare right child
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);  // Heapify the affected subtree
    }
}

void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)  // Build max heap
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {  // Extract elements
        swap(arr[0], arr[i]);  // Move current root to end
        heapify(arr, i, 0);  // Restore heap property
    }
}


// Merge function for merge sort :
void merge(int arr[], int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1],R[n2];
    
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];
    
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k++] = L[i++];
        }else{
            arr[k++] = R[j++];
        }
    }

    while(i < n1) arr[k++] = L[i++];
    while(j < n2) arr[k++] = R[j++];
}

// merge sort :
void mergeSort(int arr[], int left, int right){
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
    
}

int main(){
    int arr[] = {5, 3, 8, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout <<"original array : ";
    printArray(arr,n);

    // cout<<"Bubble sort : ";
    // bubbleSort(arr,n);
    // cout<<"Insertion sort : ";
    // insertionSort(arr,n);
    // cout<<"Selection sort : ";
    // selectionSort(arr,n);
    // cout<<"Quick sort : ";
    // quickSort(arr,0,n-1);
    // cout<<"Heap sort : ";
    // heapSort(arr,n);
    // cout<<"Merge sort : ";
    // mergeSort(arr,0,n-1);
    // printArray(arr,n);


     
    return 0;
}