//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@interface PushNotificationSoundsSyncOperation : ISOperation
{
}

- (id)_newSoundFileURLCache;	// IMP=0x00000001000a14a0
- (_Bool)_downloadSoundFiles:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000a0e30
- (_Bool)_downloadSoundFileWithURL:(id)arg1 name:(id)arg2 cache:(id)arg3 error:(id *)arg4;	// IMP=0x00000001000a07a8
- (void)run;	// IMP=0x00000001000a0524

@end
