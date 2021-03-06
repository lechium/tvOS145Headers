/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSMutableSet;

@interface MessageAttachmentController : NSObject {

	NSMutableDictionary* _peerCompletionBlocks;
	NSMutableSet* _pendingRemoteFileRequests;
	NSMutableDictionary* _localPayloadDataRequestGUIDToCompletionBlockMap;
	NSMutableDictionary* _eagerUploadStatuses;

}

@property (nonatomic,retain) NSMutableSet * pendingRemoteFileRequests;                                           //@synthesize pendingRemoteFileRequests=_pendingRemoteFileRequests - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * localPayloadDataRequestGUIDToCompletionBlockMap;              //@synthesize localPayloadDataRequestGUIDToCompletionBlockMap=_localPayloadDataRequestGUIDToCompletionBlockMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * eagerUploadStatuses;                                          //@synthesize eagerUploadStatuses=_eagerUploadStatuses - In the implementation block
@property (nonatomic,readonly) BOOL shouldSendLowResolutionOnly; 
+(id)sharedInstance;
+(id)_combinedTransferUserInfoForAttachmentSendContexts:(id)arg1 ;
-(id)init;
-(void)eagerUploadTransfer:(id)arg1 recipients:(id)arg2 ;
-(void)eagerUploadCancel:(id)arg1 ;
-(void)processMessageAttachmentDictionary:(id)arg1 forMessageGUID:(id)arg2 balloonBundleID:(id)arg3 fromIdentifier:(id)arg4 senderToken:(id)arg5 withCompletionBlock:(/*^block*/id)arg6 ;
-(void)retrieveAttachmentsForMessage:(id)arg1 inlineAttachments:(id)arg2 displayID:(id)arg3 topic:(id)arg4 comingFromStorage:(BOOL)arg5 shouldForceAutoDownload:(BOOL)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)remoteFileResponse:(id)arg1 ;
-(void)remotefileRequest:(id)arg1 attempts:(long long)arg2 shouldRetry:(BOOL)arg3 ;
-(void)sendAttachmentsForMessage:(id)arg1 canSendInline:(BOOL)arg2 displayIDs:(id)arg3 additionalContext:(id)arg4 mode:(unsigned long long)arg5 fromID:(id)arg6 recipients:(id)arg7 completionBlock:(/*^block*/id)arg8 uploadFailureBlock:(/*^block*/id)arg9 ;
-(void)updateGroupPhoto:(id)arg1 forChat:(id)arg2 messageGuid:(id)arg3 ;
-(void)sendPayloadData:(id)arg1 messageGUID:(id)arg2 fromID:(id)arg3 recipients:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)acceptFileTransfer:(id)arg1 ;
-(void)retrieveHighResolutionAttachmentForMessage:(id)arg1 fileTransferGUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handlePayloadDataRequest:(id)arg1 attempts:(unsigned long long)arg2 ;
-(void)handlePayloadDataResponse:(id)arg1 ;
-(void)sendFallbackAttachmentsForMessage:(id)arg1 displayIDs:(id)arg2 additionalContext:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)_shouldAutoDownloadUTIType:(id)arg1 fileSize:(unsigned long long)arg2 shouldForceAutoDownloadIfPossibble:(BOOL)arg3 ;
-(unsigned long long)_largeFileSizeFor:(id)arg1 allowedLargerRepresentation:(BOOL*)arg2 ;
-(void)_fileTransferSizeForAuxVideoFromServerBag:(unsigned long long*)arg1 smallSize:(unsigned long long*)arg2 serverBag:(id)arg3 ;
-(unsigned long long)_maxAllowedAuxVideoSize;
-(void)_fetchStandardSizeLimit:(unsigned long long*)arg1 highQualitySizeLimit:(unsigned long long*)arg2 forTransfer:(id)arg3 ;
-(unsigned long long)_smallerImageFileSize;
-(BOOL)shouldSendLowResolutionOnly;
-(BOOL)_previewAttachmentEnabledForStickers;
-(id)_transferInfoFileForKey:(id)arg1 ;
-(id)_fetchSizeLimitsForTransfer:(id)arg1 mode:(unsigned long long)arg2 ;
-(id)eagerUploadKeyForURL:(id)arg1 transcodeDictionary:(id)arg2 capabilities:(id)arg3 ;
-(id)eagerUploadStatusForKey:(id)arg1 ;
-(void)_sendURL:(id)arg1 urlToRemove:(id)arg2 topic:(id)arg3 sessionInfo:(id)arg4 messageGUID:(id)arg5 fileTransferGUID:(id)arg6 attachmentSendContexts:(id)arg7 failIfError:(BOOL)arg8 sendStatus:(id)arg9 attachmentStatus:(id)arg10 group:(id)arg11 ;
-(void)_transcodeURL:(id)arg1 transfer:(id)arg2 sizes:(id)arg3 commonCapabilities:(id)arg4 sendStatus:(id)arg5 urlGroup:(id)arg6 didTranscode:(/*^block*/id)arg7 handleURL:(/*^block*/id)arg8 ;
-(void)findTranscoderCapabilitiesAcrossRecipients:(id)arg1 forTransfers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendAttachmentsForMessage:(id)arg1 canSendInline:(BOOL)arg2 displayIDs:(id)arg3 additionalContext:(id)arg4 commonCapabilities:(id)arg5 mode:(unsigned long long)arg6 sessionInfo:(id)arg7 topic:(id)arg8 completionBlock:(/*^block*/id)arg9 uploadFailureBlock:(/*^block*/id)arg10 ;
-(void)sessionInfoForBusinessReceipients:(id)arg1 fromID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_fileHash:(id)arg1 ;
-(id)_transferInfoForKey:(id)arg1 ;
-(double)_stickerUploadTTL;
-(void)_setTransferInfo:(id)arg1 key:(id)arg2 ;
-(void)_deleteTransferInfoForKey:(id)arg1 ;
-(id)_capabilitiesForTransfers:(id)arg1 supportsASTC:(BOOL)arg2 ;
-(void)handleTranscodeCompletionBlockForMessage:(id)arg1 displayIDs:(id)arg2 additionalContext:(id)arg3 attemptedTranscode:(BOOL)arg4 transcodedTransferGUIDs:(id)arg5 containsAutoLoopVideo:(BOOL)arg6 outputURLs:(id)arg7 text:(id)arg8 success:(BOOL)arg9 error:(id)arg10 completionBlock:(/*^block*/id)arg11 ;
-(BOOL)_shouldAutoDownloadUTIType:(id)arg1 fileSize:(unsigned long long)arg2 ;
-(void)retrieveLocalFileTransfer:(id)arg1 attachmentIndex:(unsigned long long)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 decryptionKey:(id)arg7 requestedSize:(id)arg8 fileSize:(unsigned long long)arg9 progressBlock:(/*^block*/id)arg10 completionBlock:(/*^block*/id)arg11 ;
-(BOOL)_shouldDisableFasterDownload:(id)arg1 message:(id)arg2 ;
-(NSMutableSet *)pendingRemoteFileRequests;
-(void)setPendingRemoteFileRequests:(NSMutableSet *)arg1 ;
-(void)_sendAttachmentToPeerDevice:(unsigned long long)arg1 fileData:(id)arg2 fileTransferGUID:(id)arg3 messageGuid:(id)arg4 newFilename:(id)arg5 useLocalPeersFileAPI:(BOOL)arg6 error:(long long)arg7 ;
-(id)_createPayloadRequestDictionaryForMessageGUID:(id)arg1 requestKey:(id)arg2 ;
-(id)_createPayloadResponseDictionaryWithDictionary:(id)arg1 payloadData:(id)arg2 attachments:(id)arg3 ;
-(unsigned long long)_maxCompressedPayloadDataLength;
-(void)sendPayloadData:(id)arg1 messageGUID:(id)arg2 sessionInfo:(id)arg3 topic:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)_shouldUploadPayloadDataOverMMCS:(id)arg1 ;
-(void)fetchPayloadDataFromCompanionForGUID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)downloadPayloadDataForMessageGUID:(id)arg1 payLoadDictionary:(id)arg2 topic:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)maxTransferFileSizeForWifi:(unsigned long long*)arg1 cell:(unsigned long long*)arg2 ;
-(unsigned long long)maxTransferAudioFileSizeForWifi:(unsigned long long*)arg1 cell:(unsigned long long*)arg2 ;
-(unsigned long long)maxTransferVideoFileSizeForWifi:(unsigned long long*)arg1 cell:(unsigned long long*)arg2 ;
-(void)updateGroupPhoto:(id)arg1 forChat:(id)arg2 ;
-(BOOL)_shouldAutoAccept:(id)arg1 transfer:(id)arg2 isAltAccountDevice:(BOOL)arg3 shouldDownloadFromPeer:(BOOL)arg4 ;
-(NSMutableDictionary *)localPayloadDataRequestGUIDToCompletionBlockMap;
-(void)setLocalPayloadDataRequestGUIDToCompletionBlockMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)eagerUploadStatuses;
-(void)setEagerUploadStatuses:(NSMutableDictionary *)arg1 ;
@end

