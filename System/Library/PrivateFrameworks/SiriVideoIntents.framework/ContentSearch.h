/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVideoIntents.framework/SiriVideoIntents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INObject.h>

@class NSString, NSArray, INDateComponentsRange, NSNumber, SearchAttributes;

@interface ContentSearch : INObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * umcId; 
@property (assign,nonatomic) long long episodeReference; 
@property (nonatomic,copy) NSString * episodeNumber; 
@property (assign,nonatomic) long long seasonReference; 
@property (nonatomic,copy) NSString * seasonNumber; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSArray * roles; 
@property (nonatomic,copy) NSString * genre; 
@property (nonatomic,copy) INDateComponentsRange * releaseDateRange; 
@property (nonatomic,copy) NSString * studio; 
@property (assign,nonatomic) long long sort; 
@property (nonatomic,copy) NSNumber * recommendedAge; 
@property (nonatomic,copy) SearchAttributes * attributes; 
@property (nonatomic,copy) NSNumber * itemLimit; 
@end

