//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PDBarcodeServiceConnectionForbiddenErrorResponse : NSObject
{
    long long _errorCode;	// 8 = 0x8
    NSString *_serverDebugDescription;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000d5df4
@property(readonly, nonatomic) NSString *serverDebugDescription; // @synthesize serverDebugDescription=_serverDebugDescription;
@property(readonly, nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
- (id)initWithData:(id)arg1;	// IMP=0x00000001000d5b90

@end

