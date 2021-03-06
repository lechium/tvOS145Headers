/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RBDomainAttributeManaging.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@protocol RBDomainAttributeDataProviding;
@class NSDictionary, NSString;

@interface RBDomainAttributeManager : NSObject <RBDomainAttributeManaging, RBStateCapturing> {

	NSDictionary* _domainAttributeTemplatesByDomain;
	id<RBDomainAttributeDataProviding> _dataProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
-(NSString *)debugDescription;
-(id)captureState;
-(id)initWithDataProvider:(id)arg1 ;
-(NSString *)stateCaptureTitle;
-(id)attributesForDomain:(id)arg1 andName:(id)arg2 targetProperties:(id)arg3 withError:(id*)arg4 ;
-(id)originatorEntitlementsForDomain:(id)arg1 andName:(id)arg2 ;
-(id)endowmentNamespaceForDomain:(id)arg1 andName:(id)arg2 ;
-(BOOL)containsAttributeWithDomain:(id)arg1 andName:(id)arg2 ;
-(id)allEntitlements;
-(BOOL)areTargetPropertiesValid:(id)arg1 forAttributeWithDomain:(id)arg2 andName:(id)arg3 ;
-(id)additionalRestrictionsForDomain:(id)arg1 andName:(id)arg2 ;
-(id)targetEntitlementsForDomain:(id)arg1 andName:(id)arg2 ;
@end

