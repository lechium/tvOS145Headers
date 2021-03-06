/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVContentKeySessionDelegate.h>
#import <AVFCore/AVContentKeyRecipient.h>

@class AVStreamDataParserInternal, NSString, NSData, NSError, AVAsset;

@interface AVStreamDataParser : NSObject <AVContentKeySessionDelegate, AVContentKeyRecipient> {

	AVStreamDataParserInternal* _parser;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSData * contentProtectionSessionIdentifier; 
@property (nonatomic,readonly) BOOL mayRequireContentKeysForMediaDataProcessing; 
@property (nonatomic,readonly) id<AVStreamDataParserOutputHandling> delegate; 
@property (readonly) long long status; 
@property (readonly) long long status2; 
@property (readonly) NSError * error; 
@property (nonatomic,readonly) AVAsset * asset; 
+(id)audiovisualMIMETypes;
+(OpaqueCMBlockBufferRef)_createBlockBufferUsingNSData:(id)arg1 withOffset:(unsigned long long)arg2 withLength:(unsigned long long)arg3 ;
+(BOOL)canParseExtendedMIMEType:(id)arg1 ;
+(id)outputMIMECodecParameterForInputMIMECodecParameter:(id)arg1 ;
+(id)_createNSDataWithBlockBuffer:(OpaqueCMBlockBufferRef)arg1 ;
-(id)init;
-(void)dealloc;
-(id<AVStreamDataParserOutputHandling>)delegate;
-(void)setDelegate:(id<AVStreamDataParserOutputHandling>)arg1 ;
-(NSError *)error;
-(void)_setError:(id)arg1 ;
-(long long)status;
-(void)setSession:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(AVAsset *)asset;
-(void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2 ;
-(void)contentKeySessionContentProtectionSessionIdentifierDidChange:(id)arg1 ;
-(void)expire;
-(id)contentKeySession;
-(BOOL)mayRequireContentKeysForMediaDataProcessing;
-(int)_attachToContentKeySession:(id)arg1 failedSinceAlreadyAttachedToAnotherSession:(BOOL*)arg2 ;
-(BOOL)_attachedToExternalContentKeySession;
-(void)_willDeallocOrFinalize;
-(NSData *)contentProtectionSessionIdentifier;
-(BOOL)hasProtector;
-(int)_unregisterForFigManifoldCallbacksForTrackID:(int)arg1 ;
-(void)appendStreamData:(id)arg1 withFlags:(unsigned long long)arg2 ;
-(long long)status2;
-(int)_createFigManifoldWithBlockBuffer:(OpaqueCMBlockBufferRef)arg1 manifold:(OpaqueFigManifold*)arg2 ;
-(void)providePendingMediaData;
-(void)_appendStreamData:(OpaqueCMBlockBufferRef)arg1 withFlags:(unsigned long long)arg2 ;
-(int)_figManifold:(OpaqueFigManifoldRef)arg1 pushedSampleBuffer:(opaqueCMSampleBufferRef)arg2 trackID:(int)arg3 flags:(unsigned)arg4 ;
-(void)appendStreamData:(id)arg1 ;
-(void)setShouldProvideMediaData:(BOOL)arg1 forTrackID:(int)arg2 ;
-(BOOL)shouldProvideMediaDataForTrackID:(int)arg1 ;
-(void)_createAssetIfNecessary;
-(int)_registerForFigManifoldCallbacksForTrackID:(int)arg1 ;
-(int)_figManifold:(OpaqueFigManifoldRef)arg1 trackDidEnd:(int)arg2 ;
-(int)_figManifold:(OpaqueFigManifoldRef)arg1 formatDescription:(opaqueCMFormatDescriptionRef)arg2 orDecryptorDidChange:(void*)arg3 forTrackID:(int)arg4 ;
-(void)_figManifoldAllNewTracksReady:(OpaqueFigManifoldRef)arg1 ;
-(int)_figManifold:(OpaqueFigManifoldRef)arg1 discoveredNewTrackID:(int)arg2 mediaType:(id)arg3 ;
-(void)contentKeySession:(id)arg1 didProvideContentKeyRenewalRequest:(id)arg2 ;
-(void)processContentKeyResponseData:(id)arg1 forTrackID:(int)arg2 ;
-(void)processContentKeyResponseError:(id)arg1 forTrackID:(int)arg2 ;
-(void)renewExpiringContentKeyResponseDataForTrackID:(int)arg1 ;
-(id)streamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 trackID:(int)arg3 options:(id)arg4 error:(id*)arg5 ;
@end

