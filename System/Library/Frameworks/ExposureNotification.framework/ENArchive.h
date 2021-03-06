/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ExposureNotification/ExposureNotification-Structs.h>
@class NSString;

@interface ENArchive : NSObject {

	archiveRef _archive;
	archive_entryRef _entry;
	_sFILE* _fileHandle;
	BOOL _endOfArchive;

}

@property (nonatomic,readonly) BOOL endOfArchive;                         //@synthesize endOfArchive=_endOfArchive - In the implementation block
@property (nonatomic,copy,readonly) NSString * entryPath; 
@property (nonatomic,readonly) unsigned short entryFileType; 
-(void)dealloc;
-(void)close;
-(id)initWithPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetToCurrentEntryAndReturnError:(id*)arg1 ;
-(BOOL)readDataIntoBuffer:(void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(long long)readDataIntoBuffer:(void*)arg1 maxLength:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithFD:(int)arg1 error:(id*)arg2 ;
-(BOOL)_openArchiveAndReturnError:(id*)arg1 ;
-(BOOL)_checkEntryAndReturnError:(id*)arg1 ;
-(void)_closeArchive;
-(NSString *)entryPath;
-(BOOL)resetAndReturnError:(id*)arg1 ;
-(BOOL)endOfArchive;
-(BOOL)advanceEntryAndReturnError:(id*)arg1 ;
-(unsigned short)entryFileType;
-(BOOL)skipBytes:(unsigned long long)arg1 error:(id*)arg2 ;
@end

