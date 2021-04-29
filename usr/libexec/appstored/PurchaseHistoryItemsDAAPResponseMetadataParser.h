//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DKDAAPParserDelegate-Protocol.h"

@class NSData, NSNumber, NSString;

@interface PurchaseHistoryItemsDAAPResponseMetadataParser : NSObject <DKDAAPParserDelegate>
{
    NSData *_data;	// 8 = 0x8
    _Bool _hasParsedData;	// 16 = 0x10
    NSNumber *_isUpdate;	// 24 = 0x18
    NSNumber *_revision;	// 32 = 0x20
    NSNumber *_status;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010012864c
@property(readonly) NSNumber *status; // @synthesize status=_status;
@property(readonly) NSNumber *revision; // @synthesize revision=_revision;
@property(readonly) NSNumber *isUpdate; // @synthesize isUpdate=_isUpdate;
- (void)parser:(id)arg1 didEndContainerCode:(unsigned int)arg2;	// IMP=0x0000000100128624
- (void)parser:(id)arg1 didParseDataCode:(unsigned int)arg2 bytes:(char *)arg3 contentLength:(unsigned int)arg4;	// IMP=0x000000010012852c
- (void)parser:(id)arg1 didStartContainerCode:(unsigned int)arg2 contentLength:(unsigned int)arg3;	// IMP=0x0000000100128528
- (_Bool)parser:(id)arg1 shouldParseCodeAsContainer:(unsigned int)arg2;	// IMP=0x0000000100128514
- (_Bool)parser:(id)arg1 shouldParseCode:(unsigned int)arg2;	// IMP=0x00000001001284b8
- (void)parser:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001001283a0
- (void)parserDidCancel:(id)arg1;	// IMP=0x00000001001282b0
- (void)parser:(id)arg1 didFinishWithState:(long long)arg2;	// IMP=0x00000001001282a4
- (void)parserDidStart:(id)arg1;	// IMP=0x0000000100128260
- (void)parseMetadata;	// IMP=0x00000001001281ec
- (id)initWithData:(id)arg1;	// IMP=0x0000000100128174

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

