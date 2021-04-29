//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, iAP2Connection;

@interface iAP2HIDManager : NSObject
{
    iAP2Connection *_connection;	// 8 = 0x8
    unsigned int _hidStartCount;	// 16 = 0x10
    NSMutableDictionary *_descriptorsForConnection;	// 24 = 0x18
}

@property(nonatomic) unsigned int hidStartCount; // @synthesize hidStartCount=_hidStartCount;
@property(readonly, nonatomic) NSMutableDictionary *descriptorsForConnection; // @synthesize descriptorsForConnection=_descriptorsForConnection;
@property(readonly, nonatomic) iAP2Connection *connection; // @synthesize connection=_connection;
- (int)handleHIDGetReportResponseFromAcc:(unsigned short)arg1 reportType:(unsigned char)arg2 reportID:(unsigned char)arg3 report:(char *)arg4 reportLength:(unsigned int)arg5;	// IMP=0x000000010005b4f4
- (_Bool)handleHIDReportFromAcc:(unsigned short)arg1 report:(char *)arg2 reportLength:(unsigned int)arg3;	// IMP=0x000000010005b45c
- (_Bool)unRegisterAllDescriptors;	// IMP=0x000000010005b2b8
- (_Bool)unregisterDescriptor:(unsigned short)arg1 deleteDescriptor:(_Bool)arg2 notify:(_Bool)arg3;	// IMP=0x000000010005b1fc
- (_Bool)registerDescriptor:(unsigned short)arg1 vid:(unsigned short)arg2 pid:(unsigned short)arg3 countryCode:(unsigned char)arg4 descriptor:(char *)arg5 descriptorLength:(unsigned int)arg6;	// IMP=0x000000010005b0b0
- (void)shuttingDown;	// IMP=0x000000010005b064
- (void)dealloc;	// IMP=0x000000010005b030
- (id)initWithConnection:(id)arg1;	// IMP=0x000000010005afd4

@end

