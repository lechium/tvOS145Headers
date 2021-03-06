/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSData, NSDateInterval, NSNumber;


@protocol SPConnectionMaterial <NSObject>
@property (nonatomic,copy,readonly) NSData * address; 
@property (nonatomic,copy,readonly) NSData * connectionToken; 
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,copy,readonly) NSNumber * primaryIndex; 
@property (nonatomic,copy,readonly) NSNumber * secondaryIndex; 
@required
-(long long)type;
-(NSData *)address;
-(NSDateInterval *)dateInterval;
-(NSData *)connectionToken;
-(NSNumber *)primaryIndex;
-(NSNumber *)secondaryIndex;

@end

