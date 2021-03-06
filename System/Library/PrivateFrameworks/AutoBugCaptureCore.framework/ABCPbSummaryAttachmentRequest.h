/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AutoBugCaptureCore/AutoBugCaptureCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ABCPbSummaryAttachmentRequest : PBRequest <NSCopying> {

	NSString* _fileName;
	unsigned _fileSize;
	SCD_Struct_AB4 _has;

}

@property (nonatomic,readonly) BOOL hasFileName; 
@property (nonatomic,retain) NSString * fileName;              //@synthesize fileName=_fileName - In the implementation block
@property (assign,nonatomic) BOOL hasFileSize; 
@property (assign,nonatomic) unsigned fileSize;                //@synthesize fileSize=_fileSize - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)fileSize;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setFileName:(NSString *)arg1 ;
-(BOOL)hasFileName;
-(NSString *)fileName;
-(void)setFileSize:(unsigned)arg1 ;
-(BOOL)hasFileSize;
-(void)setHasFileSize:(BOOL)arg1 ;
@end

