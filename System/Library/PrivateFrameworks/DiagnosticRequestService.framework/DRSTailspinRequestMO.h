/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DiagnosticRequestService/DRSRequestMO.h>

@class NSNumber;

@interface DRSTailspinRequestMO : DRSRequestMO

@property (assign,nonatomic) BOOL includeOsLog; 
@property (assign,nonatomic) BOOL includeOsSignpost; 
@property (nonatomic,copy) NSNumber * maxMAT; 
@property (nonatomic,copy) NSNumber * minMAT; 
@property (assign,nonatomic) BOOL scrubbed; 
+(id)fetchRequest;
@end

