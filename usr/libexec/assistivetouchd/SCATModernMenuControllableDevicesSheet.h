//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATModernMenuSheet.h"

#import "AXSSInterDeviceSearchObserver-Protocol.h"
#import "SCATModernMenuControllableDevicesConfirmationSheetDelegate-Protocol.h"

@class AXSSInterDeviceCommunicator, NSArray, NSString, SCATModernMenuControllableDevicesConfirmationSheet;

@interface SCATModernMenuControllableDevicesSheet : SCATModernMenuSheet <AXSSInterDeviceSearchObserver, SCATModernMenuControllableDevicesConfirmationSheetDelegate>
{
    _Bool _isVisible;	// 16 = 0x10
    _Bool _isPushingConfirmationSheet;	// 17 = 0x11
    NSArray *_searchResults;	// 24 = 0x18
    AXSSInterDeviceCommunicator *_interDeviceCommunicator;	// 32 = 0x20
    SCATModernMenuControllableDevicesConfirmationSheet *_confirmationSheet;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100033f14
@property(nonatomic) _Bool isPushingConfirmationSheet; // @synthesize isPushingConfirmationSheet=_isPushingConfirmationSheet;
@property(retain, nonatomic) SCATModernMenuControllableDevicesConfirmationSheet *confirmationSheet; // @synthesize confirmationSheet=_confirmationSheet;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(readonly, nonatomic) AXSSInterDeviceCommunicator *interDeviceCommunicator; // @synthesize interDeviceCommunicator=_interDeviceCommunicator;
@property(retain, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
- (void)didExitMenuFromSheet:(id)arg1;	// IMP=0x0000000100033de8
- (void)didConfirmForSheet:(id)arg1;	// IMP=0x0000000100033cf0
- (void)didUpdateSearchResults;	// IMP=0x0000000100033a4c
- (_Bool)shouldKeepScannerAwake;	// IMP=0x0000000100033a44
- (void)viewControllerViewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100033958
- (void)viewControllerViewWillAppear:(_Bool)arg1;	// IMP=0x0000000100033868
- (void)menuItemWasActivated:(id)arg1;	// IMP=0x0000000100033654
- (id)makeMenuItemsIfNeeded;	// IMP=0x0000000100033408
- (void)dealloc;	// IMP=0x00000001000333ac
- (id)initWithMenu:(id)arg1 interDeviceCommunicator:(id)arg2;	// IMP=0x000000010003330c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

