//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class ExternalDownloadManifest, NSOrderedSet, NSURLRequest, SSDownloadManifestResponse;

@interface LoadExternalDownloadManifestOperation : ISOperation
{
    NSOrderedSet *_downloadIDs;	// 96 = 0x60
    ExternalDownloadManifest *_manifest;	// 104 = 0x68
    long long _manifestFormat;	// 112 = 0x70
    _Bool _shouldHideUserPrompts;	// 120 = 0x78
    NSURLRequest *_urlRequest;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000100080ecc
- (void)_showDialogForError:(id)arg1;	// IMP=0x0000000100080b0c
- (_Bool)_showConfirmationPromptForManifest:(id)arg1 response:(id)arg2;	// IMP=0x0000000100080498
- (_Bool)_runForPurchaseFormatWithURLRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007fddc
- (_Bool)_runForPublicFormatWithURLRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007f8ec
- (void)_processValidDownloads:(id)arg1;	// IMP=0x000000010007f2b0
- (_Bool)_handlePublicResponseForOperation:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007edf4
- (void)run;	// IMP=0x000000010007e758
@property(copy) NSURLRequest *URLRequest;
@property _Bool shouldHideUserPrompts;
@property long long manifestFormat;
@property(readonly) SSDownloadManifestResponse *manifestResponse;
@property(readonly) ExternalDownloadManifest *manifest;
- (id)initWithRequest:(id)arg1;	// IMP=0x000000010007e22c

@end

