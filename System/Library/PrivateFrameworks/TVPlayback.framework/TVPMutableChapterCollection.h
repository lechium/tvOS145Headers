/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPlayback/TVPChapterCollection.h>

@class NSString, NSArray, NSDate, NSURL;

@interface TVPMutableChapterCollection : TVPChapterCollection

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) NSArray * chapters; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,retain) id backingData; 
@property (nonatomic,retain) NSDate * startDate; 
@property (assign,nonatomic) BOOL shouldStartPlaybackFromStartDate; 
@property (assign,nonatomic) BOOL shouldDisplayChapterMarkers; 
@property (assign,nonatomic) BOOL shouldShowDescriptionOnChapterSkip; 
@property (assign,nonatomic) double refreshInterval; 
@property (nonatomic,copy) NSURL * refreshURL; 
@end

