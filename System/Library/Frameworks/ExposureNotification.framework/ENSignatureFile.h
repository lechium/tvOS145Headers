/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ExposureNotification/ExposureNotification-Structs.h>
@class NSMutableData, NSArray;

@interface ENSignatureFile : NSObject {

	_sFILE* _fileHandle;
	NSMutableData* _outputData;
	NSArray* _signatures;

}

@property (nonatomic,copy) NSArray * signatures;              //@synthesize signatures=_signatures - In the implementation block
+(id)_signatureFileWithProtobufCoder:(id)arg1 error:(id*)arg2 ;
+(id)signatureFileWithArchive:(id)arg1 error:(id*)arg2 ;
+(id)signatureFileWithBytes:(const char*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)closeAndReturnError:(id*)arg1 ;
-(NSArray *)signatures;
-(void)setSignatures:(NSArray *)arg1 ;
-(BOOL)writeAndReturnError:(id*)arg1 ;
-(BOOL)openWithFileSystemRepresentation:(const char*)arg1 reading:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)openForWritingToData:(id)arg1 error:(id*)arg2 ;
@end

