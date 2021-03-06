/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PLJournalEntryPayloadID, PLJournalEntryPayload;
@class PLJournalEntryHeader, NSPersistentHistoryToken;

@interface PLJournalEntry : NSObject {

	id<PLJournalEntryPayloadID> _payloadID;
	id<PLJournalEntryPayload> _payload;
	PLJournalEntryHeader* _header;
	NSPersistentHistoryToken* _historyToken;

}

@property (nonatomic,retain) id<PLJournalEntryPayloadID> payloadID;                //@synthesize payloadID=_payloadID - In the implementation block
@property (assign,nonatomic) unsigned payloadVersion; 
@property (nonatomic,retain) PLJournalEntryHeader * header;                        //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSPersistentHistoryToken * historyToken;              //@synthesize historyToken=_historyToken - In the implementation block
@property (nonatomic,retain) id<PLJournalEntryPayload> payload;                    //@synthesize payload=_payload - In the implementation block
-(id)description;
-(id)debugDescription;
-(id)init;
-(id<PLJournalEntryPayload>)payload;
-(NSPersistentHistoryToken *)historyToken;
-(void)setPayload:(id<PLJournalEntryPayload>)arg1 ;
-(unsigned long long)entryType;
-(PLJournalEntryHeader *)header;
-(void)setHeader:(PLJournalEntryHeader *)arg1 ;
-(unsigned)payloadVersion;
-(void)setPayloadVersion:(unsigned)arg1 ;
-(id<PLJournalEntryPayloadID>)payloadID;
-(id)initForInsertWithPayload:(id)arg1 ;
-(id)initForUpdateWithPayload:(id)arg1 ;
-(id)initWithPayloadID:(id)arg1 payload:(id)arg2 entryType:(int)arg3 ;
-(id)initForDeleteWithPayloadID:(id)arg1 ;
-(BOOL)_readFromFileHandle:(id)arg1 decodePayload:(BOOL)arg2 payloadClass:(Class)arg3 error:(id*)arg4 ;
-(BOOL)readFromFileHandle:(id)arg1 decodePayload:(BOOL)arg2 payloadClass:(Class)arg3 entryOffset:(unsigned long long*)arg4 error:(id*)arg5 ;
-(void)writeBytes:(const void*)arg1 length:(unsigned long long)arg2 toFileHandle:(id)arg3 ;
-(void)_appendHeaderData:(id)arg1 headerCRC:(unsigned short)arg2 payloadData:(id)arg3 toFileHandle:(id)arg4 ;
-(void)appendHeaderData:(id)arg1 headerCRC:(unsigned short)arg2 payloadData:(id)arg3 toFileHandle:(id)arg4 ;
-(BOOL)writeToFileHandle:(id)arg1 error:(id*)arg2 ;
-(id)descriptionWithBuilder:(id)arg1 ;
-(void)setPayloadID:(id<PLJournalEntryPayloadID>)arg1 ;
-(void)setHistoryToken:(NSPersistentHistoryToken *)arg1 ;
@end

