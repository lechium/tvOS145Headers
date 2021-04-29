/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MIME/MIME-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableSet, MFMessageStoreObjectCache, NSString;

@interface MFMessageStore : NSObject <NSCopying> {

	NSMutableSet* _uniqueStrings;
	MFMessageStoreObjectCache* _objectCache;

}

@property (nonatomic,retain,readonly) MFMessageStoreObjectCache * objectCache;              //@synthesize objectCache=_objectCache - In the implementation block
@property (nonatomic,copy) NSString * storagePath; 
+(Class)headersClass;
+(Class)classForMimePart;
+(void)setDefaultMessageHeadersClass:(Class)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(id)bodyDataForMessage:(id)arg1 isComplete:(BOOL*)arg2 isPartial:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(void)deleteBodyDataForMessage:(id)arg1 ;
-(NSString *)storagePath;
-(void)setStoragePath:(NSString *)arg1 ;
-(void)setMessageClass:(Class)arg1 ;
-(id)headerDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(BOOL)bodyFetchRequiresNetworkActivity;
-(id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(void)_deleteCachedBodyForMessage:(id)arg1 ;
-(BOOL)messageCanBeTriaged:(id)arg1 ;
-(id)headersForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 ;
-(id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 updateFlags:(BOOL)arg3 ;
-(id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5 ;
-(id)uniquedString:(id)arg1 ;
-(id)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5 ;
-(BOOL)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 isComplete:(BOOL*)arg3 withConsumer:(id)arg4 downloadIfNecessary:(BOOL)arg5 didDownload:(BOOL*)arg6 ;
-(void)setNumberOfAttachments:(unsigned)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4 ;
-(id)defaultAlternativeForPart:(id)arg1 ;
-(id)bestAlternativeForPart:(id)arg1 ;
-(id)additionalHeadersForReplyOfMessage:(id)arg1 ;
-(id)additionalHeadersForForwardOfMessage:(id)arg1 ;
-(BOOL)hasCompleteDataForMimePart:(id)arg1 ;
-(id)newObjectCache;
-(void)_flushAllCaches;
-(id)_setOrGetBody:(id)arg1 forMessage:(id)arg2 updateFlags:(BOOL)arg3 ;
-(id)_bodyForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 updateFlags:(BOOL)arg3 ;
-(id)decryptedTopLevelPartForPart:(id)arg1 ;
-(id)_cachedBodyDataContainerForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 partial:(BOOL*)arg4 ;
-(id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(void)_flushAllMessageData;
-(id)_downloadHeadersForMessages:(id)arg1 ;
-(BOOL)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 withConsumer:(id)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(BOOL)wantsLineEndingConversionForMIMEPart:(id)arg1 ;
-(MFMessageStoreObjectCache *)objectCache;
@end
