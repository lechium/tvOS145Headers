/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RBDomainAttributeManaging, RBBundlePropertiesManaging, RBEntitlementManaging;
@class RBAssertionCollection, RBProcessIndex, RBProcessMap;

@interface RBAssertionStateResolver : NSObject {

	RBAssertionCollection* _assertionCollection;
	RBProcessIndex* _processIndex;
	RBProcessMap* _stateMap;
	id<RBDomainAttributeManaging> _domainAttributeManager;
	id<RBBundlePropertiesManaging> _bundlePropertiesManager;
	id<RBEntitlementManaging> _entitlementManager;

}

@property (nonatomic,retain) RBAssertionCollection * assertionCollection;                         //@synthesize assertionCollection=_assertionCollection - In the implementation block
@property (nonatomic,retain) RBProcessIndex * processIndex;                                       //@synthesize processIndex=_processIndex - In the implementation block
@property (nonatomic,retain) RBProcessMap * stateMap;                                             //@synthesize stateMap=_stateMap - In the implementation block
@property (nonatomic,retain) id<RBDomainAttributeManaging> domainAttributeManager;                //@synthesize domainAttributeManager=_domainAttributeManager - In the implementation block
@property (nonatomic,retain) id<RBBundlePropertiesManaging> bundlePropertiesManager;              //@synthesize bundlePropertiesManager=_bundlePropertiesManager - In the implementation block
@property (nonatomic,retain) id<RBEntitlementManaging> entitlementManager;                        //@synthesize entitlementManager=_entitlementManager - In the implementation block
-(id<RBEntitlementManaging>)entitlementManager;
-(void)setAssertionCollection:(RBAssertionCollection *)arg1 ;
-(void)setProcessIndex:(RBProcessIndex *)arg1 ;
-(void)setStateMap:(RBProcessMap *)arg1 ;
-(void)setDomainAttributeManager:(id<RBDomainAttributeManaging>)arg1 ;
-(void)setBundlePropertiesManager:(id<RBBundlePropertiesManaging>)arg1 ;
-(void)setEntitlementManager:(id<RBEntitlementManaging>)arg1 ;
-(id)assertionDescriptorsWithFlattenedAttributes:(BOOL)arg1 ;
-(id)resolveForAssertions:(id)arg1 ;
-(id<RBBundlePropertiesManaging>)bundlePropertiesManager;
-(id<RBDomainAttributeManaging>)domainAttributeManager;
-(RBAssertionCollection *)assertionCollection;
-(RBProcessIndex *)processIndex;
-(RBProcessMap *)stateMap;
@end
