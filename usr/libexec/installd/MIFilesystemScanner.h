//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MIFilesystemScannerDelegate;

@interface MIFilesystemScanner : NSObject
{
    id <MIFilesystemScannerDelegate> _delegate;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100022d5c
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) __weak id <MIFilesystemScannerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)performScanWithError:(id *)arg1;	// IMP=0x0000000100022614
- (id)init;	// IMP=0x0000000100022604
- (id)initWithScanOptions:(unsigned long long)arg1;	// IMP=0x00000001000225bc
- (_Bool)_scanBundleContainersWithError:(id *)arg1 ignoredErrorOccurredOnOneOrMoreItems:(_Bool *)arg2;	// IMP=0x0000000100022518
- (_Bool)_scanBundleContainerType:(long long)arg1 withError:(id *)arg2 ignoredErrorOccurredOnOneOrMoreItems:(_Bool *)arg3;	// IMP=0x00000001000220e0
- (_Bool)_scanFrameworksLocationsWithError:(id *)arg1;	// IMP=0x0000000100021f14
- (_Bool)_scanFrameworkDirectory:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000100021a5c
- (_Bool)_scanAppsDirectory:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000100021524

@end

