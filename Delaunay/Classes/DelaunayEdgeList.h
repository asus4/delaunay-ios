//
//  DelaunayEdgeList.h
//  Delaunay
//
//  Created by Christopher Garrett on 4/17/11.
//  Copyright 2011 ZWorkbench, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class DelaunayHalfEdge;

@interface DelaunayEdgeList : NSObject {
   CGFloat deltaX;
   CGFloat minX;
   NSInteger hashSize;
   NSMutableArray *hash;
}

@property (nonatomic, strong) DelaunayHalfEdge *leftEnd;
@property (nonatomic, strong) DelaunayHalfEdge *rightEnd;

+ (DelaunayEdgeList *) edgeListWithMinX: (CGFloat) _minX deltaX: (CGFloat) _deltaX sqrtNumSites: (NSInteger) _sqrtNumSites;

- (id) initWithMinX: (CGFloat) _minX deltaX: (CGFloat) _deltaX sqrtNumSites: (NSInteger) _sqrtNumSites;
- (DelaunayHalfEdge *) edgeListLeftNeighbor: (CGPoint) p;
- (void) toRightOf: (DelaunayHalfEdge *) lb insert: (DelaunayHalfEdge *) newHalfEdge;
- (void) remove: (DelaunayHalfEdge *) halfEdge;

@end
