//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, WhitelistChecker;

@interface MSDDemoManifestCheck : NSObject
{
    NSDictionary *_segmentedManifestWithRigorousFlag;	// 8 = 0x8
    NSMutableDictionary *_allowedSymLinks;	// 16 = 0x10
    WhitelistChecker *_whitelistChecker;	// 24 = 0x18
    NSDictionary *_itemBeingInstalled;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000010000fc98
- (void).cxx_destruct;	// IMP=0x0000000100012ae8
@property(retain) NSDictionary *itemBeingInstalled; // @synthesize itemBeingInstalled=_itemBeingInstalled;
@property(retain) WhitelistChecker *whitelistChecker; // @synthesize whitelistChecker=_whitelistChecker;
@property(retain) NSMutableDictionary *allowedSymLinks; // @synthesize allowedSymLinks=_allowedSymLinks;
@property(retain) NSDictionary *segmentedManifestWithRigorousFlag; // @synthesize segmentedManifestWithRigorousFlag=_segmentedManifestWithRigorousFlag;
- (_Bool)checkFileForEntitlements:(id)arg1 forCorrespondingManifestEntry:(id)arg2;	// IMP=0x00000001000124c0
- (void)registerEntitlementNotificationHandler;	// IMP=0x000000010001229c
- (_Bool)runAppLayoutSecurityCheck:(id)arg1;	// IMP=0x00000001000118cc
- (_Bool)runSecurityChecksForSection:(id)arg1 dataType:(id)arg2;	// IMP=0x0000000100010dfc
- (_Bool)runSecurityCheck;	// IMP=0x00000001000102b8
- (_Bool)secureManifestCheckForSegmentedManifest:(id)arg1;	// IMP=0x0000000100010160
- (id)init;	// IMP=0x000000010000fd04

@end

