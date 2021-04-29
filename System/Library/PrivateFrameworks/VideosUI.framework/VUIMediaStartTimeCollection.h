/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, VUIMediaStartTimeInfo, NSArray;

@interface VUIMediaStartTimeCollection : NSObject {

	NSMutableArray* _startTimeInfos;

}

@property (nonatomic,retain) NSMutableArray * startTimeInfos;                               //@synthesize startTimeInfos=_startTimeInfos - In the implementation block
@property (nonatomic,readonly) VUIMediaStartTimeInfo * preferredStartTimeInfo; 
@property (nonatomic,readonly) NSArray * allStartTimeInfos; 
+(void)initialize;
-(void)addStartTimeInfo:(id)arg1 ;
-(NSMutableArray *)startTimeInfos;
-(void)setStartTimeInfos:(NSMutableArray *)arg1 ;
-(void)removeAllStartTimeInfos;
-(NSArray *)allStartTimeInfos;
-(VUIMediaStartTimeInfo *)preferredStartTimeInfo;
@end
