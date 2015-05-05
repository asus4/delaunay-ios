//
//  DelaunayHalfEdge.h
//  Delaunay
//
//  Created by Christopher Garrett on 4/14/11.
//  Copyright 2011 ZWorkbench, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class DelaunayEdge, DelaunayOrientation, DelaunayVertex;

@interface DelaunayHalfEdge : NSObject {
    
}

@property (nonatomic, strong) DelaunayHalfEdge *edgeListLeftNeighbor;
@property (nonatomic, strong) DelaunayHalfEdge *edgeListRightNeighbor;
@property (nonatomic, strong) DelaunayHalfEdge *nextInPriorityQueue;

@property (nonatomic, strong) DelaunayEdge *edge;
@property (nonatomic, strong) DelaunayOrientation *orientation;
@property (nonatomic, strong) DelaunayVertex *vertex;

// The vertex's y-coordinate in the transformed Voronoi space
@property (nonatomic, assign) CGFloat ystar;

+ (DelaunayHalfEdge *) dummy;
+ (DelaunayHalfEdge *) halfEdgeWithEdge: (DelaunayEdge *)edge orientation: (DelaunayOrientation *) orientation;

- (BOOL) isRightOf: (CGPoint) p;



@end
