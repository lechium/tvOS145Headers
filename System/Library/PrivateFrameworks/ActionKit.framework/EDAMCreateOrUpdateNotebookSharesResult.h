/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class NSNumber, NSArray;

@interface EDAMCreateOrUpdateNotebookSharesResult : FATObject {

	NSNumber* _updateSequenceNum;
	NSArray* _matchingShares;

}

@property (nonatomic,retain) NSNumber * updateSequenceNum;              //@synthesize updateSequenceNum=_updateSequenceNum - In the implementation block
@property (nonatomic,retain) NSArray * matchingShares;                  //@synthesize matchingShares=_matchingShares - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)updateSequenceNum;
-(void)setUpdateSequenceNum:(NSNumber *)arg1 ;
-(NSArray *)matchingShares;
-(void)setMatchingShares:(NSArray *)arg1 ;
@end

