//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NIExportedObjectForwarder : NSObject
{
    id _exportedObject;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001001d72bc
@property __weak id exportedObject; // @synthesize exportedObject=_exportedObject;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000001001d7280
- (id)initWithExportedObject:(id)arg1;	// IMP=0x00000001001d71e8

@end

