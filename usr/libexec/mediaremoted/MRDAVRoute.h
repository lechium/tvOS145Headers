//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRDAVRouteExtendedInfo, NSData, NSDictionary, NSString;

@interface MRDAVRoute : NSObject
{
    _Bool _inputRoute;	// 8 = 0x8
    _Bool _outputRoute;	// 9 = 0x9
    _Bool _picked;	// 10 = 0xa
    _Bool _speakerRoute;	// 11 = 0xb
    NSString *_uniqueIdentifier;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_type;	// 32 = 0x20
    NSString *_modelName;	// 40 = 0x28
    NSData *_MACAddress;	// 48 = 0x30
    MRDAVRouteExtendedInfo *_extendedInfo;	// 56 = 0x38
    NSDictionary *_dictionary;	// 64 = 0x40
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000ba984
- (void).cxx_destruct;	// IMP=0x00000001000bab7c
@property(readonly, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(readonly, nonatomic) MRDAVRouteExtendedInfo *extendedInfo; // @synthesize extendedInfo=_extendedInfo;
@property(readonly, nonatomic, getter=isSpeakerRoute) _Bool speakerRoute; // @synthesize speakerRoute=_speakerRoute;
@property(readonly, nonatomic, getter=isPicked) _Bool picked; // @synthesize picked=_picked;
@property(readonly, nonatomic, getter=isOutputRoute) _Bool outputRoute; // @synthesize outputRoute=_outputRoute;
@property(readonly, nonatomic, getter=isInputRoute) _Bool inputRoute; // @synthesize inputRoute=_inputRoute;
@property(readonly, nonatomic) NSData *MACAddress; // @synthesize MACAddress=_MACAddress;
@property(readonly, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (unsigned long long)sampleRate;	// IMP=0x00000001000bab1c
- (_Bool)matchesUniqueIdentifier:(id)arg1;	// IMP=0x00000001000baaa4
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000001000baa04

@end

