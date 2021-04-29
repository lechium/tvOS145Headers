//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDTaskOperation.h"

@interface DMDInstallConfigurationOperation : DMDTaskOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100049650
+ (id)requiredEntitlements;	// IMP=0x000000010004963c
+ (id)whitelistedClassesForRequest;	// IMP=0x0000000100049600
+ (id)_intersectionAliasToFeatures;	// IMP=0x000000010004b4c0
- (unsigned long long)queueGroup;	// IMP=0x0000000100049648
- (id)_intersectionFeatureForPayloadRestrictionKey:(id)arg1;	// IMP=0x000000010004b59c
- (id)_applyHeuristicsToRestrictions:(id)arg1 error:(id *)arg2;	// IMP=0x000000010004b344
- (id)_mapMCRestrictionsFromPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000010004a600
- (_Bool)_installRestrictionsPayload:(id)arg1 withRequest:(id)arg2 error:(id *)arg3;	// IMP=0x000000010004a310
- (void)_rollbackProfile:(id)arg1 withRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004a0a0
- (_Bool)_installProfile:(id)arg1 withRequest:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100049d04
- (void)runWithRequest:(id)arg1;	// IMP=0x0000000100049788

@end

