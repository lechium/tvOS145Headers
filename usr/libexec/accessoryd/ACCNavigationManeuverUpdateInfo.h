//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ACCNavigationManeuverUpdateInfo : NSObject
{
    NSMutableDictionary *_infoDict;	// 8 = 0x8
}

+ (id)keyForType:(unsigned short)arg1;	// IMP=0x000000010003b258
- (void).cxx_destruct;	// IMP=0x000000010003b430
@property(retain) NSMutableDictionary *infoDict; // @synthesize infoDict=_infoDict;
- (id)copyDictionary;	// IMP=0x000000010003b228
- (_Bool)setInfo:(unsigned short)arg1 data:(id)arg2;	// IMP=0x000000010003b178
- (id)copyInfo:(unsigned short)arg1;	// IMP=0x000000010003b0e4
- (_Bool)_checkDataClassForType:(unsigned short)arg1 data:(id)arg2;	// IMP=0x000000010003af60
- (id)init;	// IMP=0x000000010003aefc

@end

