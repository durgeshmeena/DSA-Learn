
/*

A dirty page is one that has been modified but not yet written to the disk via IO.

VAX/VMS had lazy optimizations and paged/swapped memory decades ago – where as the networking of computers has required OSs to become more secure.


Aspect	                VAX/VMS	                        Linux
virtual address space	pages and segmented	              pages
page table structure	linear table	                  four-level table
page replacement policy	FIFO with dirty/clean list	      LRU with active/inactive list



*/