/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Notes/ICIndexItemsOperation.h>

@class NSArray;

@interface ICIndexItemsByIdentifiersOperation : ICIndexItemsOperation {

	NSArray* _objectIDURIsToIndex;

}

@property (nonatomic,copy) NSArray * objectIDURIsToIndex;              //@synthesize objectIDURIsToIndex=_objectIDURIsToIndex - In the implementation block
-(void)main;
-(id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2 ;
-(void)setObjectIDURIsToIndex:(NSArray *)arg1 ;
-(id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2 objectIDURIsToIndex:(id)arg3 ;
-(NSArray *)objectIDURIsToIndex;
@end

