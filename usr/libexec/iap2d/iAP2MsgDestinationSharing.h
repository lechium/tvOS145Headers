//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class iAP2Connection;

@interface iAP2MsgDestinationSharing : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    iAP2Connection *_connection;	// 16 = 0x10
}

@property _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly) iAP2Connection *connection; // @synthesize connection=_connection;
- (long long)sendDesitinationInformationMessageWithParameters:(id)arg1 identifier:(id)arg2;	// IMP=0x00000001000134d4
- (id)description;	// IMP=0x0000000100013484
- (void)shuttingDown;	// IMP=0x000000010001345c
- (void)dealloc;	// IMP=0x0000000100013428
- (id)initWithConnection:(id)arg1;	// IMP=0x00000001000133cc

@end

