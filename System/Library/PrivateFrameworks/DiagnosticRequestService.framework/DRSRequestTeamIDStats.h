/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DiagnosticRequestService/DRSRequestStats.h>

@class NSDictionary, NSString;

@interface DRSRequestTeamIDStats : DRSRequestStats

@property (nonatomic,readonly) NSDictionary * perIssueCategoryStats; 
@property (nonatomic,readonly) NSString * teamID; 
+(id)keyName;
+(Class)childStatsClass;
+(id)descriptionStringForRequest:(id)arg1 ;
-(NSString *)teamID;
-(NSDictionary *)perIssueCategoryStats;
@end
