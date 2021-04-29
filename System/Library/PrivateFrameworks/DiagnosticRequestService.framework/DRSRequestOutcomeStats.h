/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DiagnosticRequestService/DRSRequestStats.h>

@class NSString, NSDictionary;

@interface DRSRequestOutcomeStats : DRSRequestStats

@property (nonatomic,readonly) NSString * requestOutcome; 
@property (nonatomic,readonly) NSDictionary * perStateStats; 
+(id)keyName;
+(Class)childStatsClass;
+(id)descriptionStringForRequest:(id)arg1 ;
-(NSString *)requestOutcome;
-(NSDictionary *)perStateStats;
@end

