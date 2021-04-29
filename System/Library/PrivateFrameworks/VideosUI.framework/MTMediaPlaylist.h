/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol MTMediaPlaylist <NSObject>
@property (nonatomic,readonly) NSArray * eventData; 
@optional
-(NSArray *)eventData;

@required
-(id)itemAtOverallPosition:(unsigned long long)arg1 rangeOptions:(long long)arg2;
-(id)itemsBetweenStartOverallPosition:(unsigned long long)arg1 endOverallPosition:(unsigned long long)arg2;

@end
