//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class URLBag, URLRequestProperties;

@interface URLRequest : NSObject
{
    URLBag *_bag;	// 8 = 0x8
    URLRequestProperties *_requestProperties;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000cdef8
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000cdc48
- (id)initWithRequestProperties:(id)arg1;	// IMP=0x00000001000cdb9c

@end

