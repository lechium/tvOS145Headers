/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, NSDictionary, NSString;


@protocol GEOServerFormatTokenCountdownValue <NSObject,NSCoding>
@property (nonatomic,readonly) long long countdownType; 
@property (nonatomic,readonly) NSArray * timestamps; 
@property (nonatomic,readonly) NSDictionary * alternativeFormatStringsByType; 
@property (nonatomic,readonly) NSString * separator; 
@required
-(NSArray *)timestamps;
-(NSString *)separator;
-(long long)countdownType;
-(NSDictionary *)alternativeFormatStringsByType;

@end

