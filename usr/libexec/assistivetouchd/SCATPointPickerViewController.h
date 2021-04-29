//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATElementManagerViewController.h"

#import "SCATMenuObserver-Protocol.h"

@class NSString, SCATMenu, SCATPointPicker, SCATPointPickerView;

@interface SCATPointPickerViewController : SCATElementManagerViewController <SCATMenuObserver>
{
    SCATMenu *_menu;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000bce00
@property(retain, nonatomic) SCATMenu *menu; // @synthesize menu=_menu;
- (_Bool)shouldRescanAfterTap;	// IMP=0x00000001000bcdd4
- (void)menuWillDisappear:(id)arg1;	// IMP=0x00000001000bcd20
- (void)menuWillAppear:(id)arg1;	// IMP=0x00000001000bcc6c
- (Class)classForPointPickerView;	// IMP=0x00000001000bcc60
@property(copy, nonatomic) NSString *prompt;
@property(readonly, nonatomic) SCATPointPickerView *pointPickerView;
- (void)willPresentWithDisplayContext:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000bca34
- (long long)pickerType;	// IMP=0x00000001000c13d0
@property(readonly, nonatomic) SCATPointPicker *pointPicker;
- (void)dealloc;	// IMP=0x00000001000bc9cc
- (void)orientationDidChange:(id)arg1;	// IMP=0x00000001000bc9c8
- (void)loadView;	// IMP=0x00000001000bc970
- (id)initWithElementManager:(id)arg1 menu:(id)arg2;	// IMP=0x00000001000bc8d0
- (id)init;	// IMP=0x00000001000bc87c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

