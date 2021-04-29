/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CardServices.framework/CardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CardServices/_CRSServiceBundle.h>
#import <libobjc.A.dylib/CRSCardServing.h>

@protocol CRSCardServing;
@class NSString;

@interface _CRSCardServiceBundle : _CRSServiceBundle <CRSCardServing> {

	id<CRSCardServing> _cardService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)underlyingService;
-(BOOL)canSatisfyCardRequest:(id)arg1 ;
-(unsigned long long)servicePriorityForRequest:(id)arg1 ;
-(void)requestCard:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_initializeCardServiceWithClass:(Class)arg1 ;
@end

