//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PBSystemOverlayUIProvider;

@interface PBDialogContext : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    id <PBSystemOverlayUIProvider> _provider;	// 16 = 0x10
}

+ (id)contextWithViewServiceName:(id)arg1 className:(id)arg2;	// IMP=0x00000001000befc8
+ (id)contextWithViewService:(id)arg1;	// IMP=0x00000001000bef1c
+ (id)contextWithViewController:(id)arg1;	// IMP=0x00000001000bec8c
- (void).cxx_destruct;	// IMP=0x00000001000bf10c
@property(readonly, nonatomic) id <PBSystemOverlayUIProvider> provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_invalidate;	// IMP=0x00000001000bf0a0
- (id)initWithIdentifier:(id)arg1 provider:(id)arg2;	// IMP=0x00000001000beaa0

@end
