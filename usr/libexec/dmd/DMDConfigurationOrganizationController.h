//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DMDConfigurationSourceControllerDelegate-Protocol.h"
#import "DMDRemoteAssetResolver-Protocol.h"

@class DMFConfigurationOrganization, NSArray, NSMutableDictionary, NSString;
@protocol DMDConfigurationOrganizationControllerDelegate;

@interface DMDConfigurationOrganizationController : NSObject <DMDConfigurationSourceControllerDelegate, DMDRemoteAssetResolver>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_displayName;	// 16 = 0x10
    NSString *_type;	// 24 = 0x18
    id <DMDConfigurationOrganizationControllerDelegate> _delegate;	// 32 = 0x20
    NSMutableDictionary *_persistentConfigurationSourceControllersByIdentifier;	// 40 = 0x28
    NSMutableDictionary *_ephemeralConfigurationSourceControllersByIdentifier;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010002e630
@property(retain, nonatomic) NSMutableDictionary *ephemeralConfigurationSourceControllersByIdentifier; // @synthesize ephemeralConfigurationSourceControllersByIdentifier=_ephemeralConfigurationSourceControllersByIdentifier;
@property(retain, nonatomic) NSMutableDictionary *persistentConfigurationSourceControllersByIdentifier; // @synthesize persistentConfigurationSourceControllersByIdentifier=_persistentConfigurationSourceControllersByIdentifier;
@property(nonatomic) __weak id <DMDConfigurationOrganizationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)resolveAssetWithContext:(id)arg1;	// IMP=0x000000010002e494
- (void)configurationSourceController:(id)arg1 fetchEventsWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002e368
- (void)configurationSourceController:(id)arg1 fetchStatusUpdatesWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002e23c
- (void)unregisterConfigurationSource:(id)arg1;	// IMP=0x000000010002e1a8
- (id)registerConfigurationSource:(id)arg1;	// IMP=0x000000010002dfc4
- (id)configurationSourceWithIdentifier:(id)arg1;	// IMP=0x000000010002dee4
@property(readonly, copy, nonatomic) NSArray *ephemeralConfigurationSources;
@property(readonly, copy, nonatomic) NSArray *persistentConfigurationSources;
@property(readonly, copy, nonatomic) NSArray *configurationSourceControllers;
@property(readonly, nonatomic) DMFConfigurationOrganization *organization;
@property(readonly, copy) NSString *description;
- (void)updateWithOrganization:(id)arg1;	// IMP=0x000000010002d4f8
- (id)initWithOrganization:(id)arg1 delegate:(id)arg2;	// IMP=0x000000010002d3fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

