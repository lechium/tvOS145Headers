/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VUIMediaLibraryOperation.h>

@class NSArray;

@interface VUIMediaLibraryFetchMediaEntitiesOperation : VUIMediaLibraryOperation {

	NSArray* _responses;
	NSArray* _requests;

}

@property (nonatomic,copy) NSArray * responses;              //@synthesize responses=_responses - In the implementation block
@property (nonatomic,copy) NSArray * requests;               //@synthesize requests=_requests - In the implementation block
-(NSArray *)requests;
-(void)setRequests:(NSArray *)arg1 ;
-(NSArray *)responses;
-(void)setResponses:(NSArray *)arg1 ;
-(void)executionDidBegin;
-(id)initWithMediaLibrary:(id)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 requests:(id)arg2 ;
@end

