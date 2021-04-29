/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetAppsUtilities/NetAppsUtilities-Structs.h>
#import <CoreFoundation/NSEnumerator.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NATreeNode, NSArray;

@interface NATreeNodeDeepNodeEnumerator : NSEnumerator <NSCopying> {

	NSMutableArray* _enumeratorStack;
	NATreeNode* _node;

}

@property (nonatomic,copy,readonly) NATreeNode * node;                 //@synthesize node=_node - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allObjects; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)allObjects;
-(id)nextObject;
-(NATreeNode *)node;
-(id)initWithNode:(id)arg1 ;
@end

