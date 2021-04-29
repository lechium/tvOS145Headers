//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DKDAAPParserDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface AddToLibraryResponseParserDelegate : NSObject <DKDAAPParserDelegate>
{
    _Bool _updateRequired;	// 8 = 0x8
    NSMutableDictionary *_addedItems;	// 16 = 0x10
    unsigned long long _currentCloudID;	// 24 = 0x18
    unsigned long long _currentAdamID;	// 32 = 0x20
    NSString *_currentGlobalID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000ebe84
@property(readonly, nonatomic) NSString *currentGlobalID; // @synthesize currentGlobalID=_currentGlobalID;
@property(readonly, nonatomic) unsigned long long currentAdamID; // @synthesize currentAdamID=_currentAdamID;
@property(readonly, nonatomic) unsigned long long currentCloudID; // @synthesize currentCloudID=_currentCloudID;
@property(readonly, nonatomic) _Bool updateRequired; // @synthesize updateRequired=_updateRequired;
@property(readonly, nonatomic) NSMutableDictionary *addedItems; // @synthesize addedItems=_addedItems;
- (void)parser:(id)arg1 didEndContainerCode:(unsigned int)arg2;	// IMP=0x00000001000ebd38
- (void)parser:(id)arg1 didParseDataCode:(unsigned int)arg2 bytes:(char *)arg3 contentLength:(unsigned int)arg4;	// IMP=0x00000001000ebba8
- (void)parser:(id)arg1 didStartContainerCode:(unsigned int)arg2 contentLength:(unsigned int)arg3;	// IMP=0x00000001000ebb80
- (_Bool)parser:(id)arg1 shouldParseCodeAsContainer:(unsigned int)arg2;	// IMP=0x00000001000ebb48
- (_Bool)parser:(id)arg1 shouldParseCode:(unsigned int)arg2;	// IMP=0x00000001000ebab0
- (id)init;	// IMP=0x00000001000eba3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

