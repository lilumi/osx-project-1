//
//  Cell+Mutator.h
//  DNAproject
//
//  Created by Lilumi Odi on 05.11.12.
//  Copyright (c) 2012 Lilumi Odi. All rights reserved.
//

@interface Cell : NSObject 
   @property NSMutableArray *DNA;

- (id)   initWithLenght: (int) length;
- (int)  hammingDistance: (Cell*) aCell;
- (NSString* ) randomCharacterExcluding: (NSString*) exclude ;

@end


@interface Cell (Mutator)
- (void) mutate: (int) p;
@end
