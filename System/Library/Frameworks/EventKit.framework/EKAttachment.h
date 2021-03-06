/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>

@class NSURL, NSString, NSNumber;

@interface EKAttachment : EKObject

@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSString * localRelativePath; 
@property (nonatomic,readonly) NSURL * localURL; 
@property (nonatomic,readonly) BOOL isBinary; 
@property (nonatomic,readonly) NSString * fileName; 
@property (nonatomic,readonly) NSString * fileFormat; 
@property (nonatomic,readonly) NSNumber * fileSize; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSURL * URLForPendingFileCopy; 
+(id)knownSingleValueKeysForComparison;
+(Class)frozenClass;
+(id)knownIdentityKeysForComparison;
+(id)createTempDestinationURLWithExtension:(id)arg1 ;
+(id)_copyFileAtURLToTemporaryDirectory:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSURL *)URL;
-(NSNumber *)fileSize;
-(NSString *)UUID;
-(void)setURL:(NSURL *)arg1 ;
-(void)setUUID:(NSString *)arg1 ;
-(NSString *)fileName;
-(NSURL *)localURL;
-(void)setFileSize:(NSNumber *)arg1 ;
-(NSString *)fileFormat;
-(void)setFileFormat:(NSString *)arg1 ;
-(id)externalID;
-(void)setExternalID:(id)arg1 ;
-(BOOL)isBinary;
-(NSString *)localRelativePath;
-(id)semanticIdentifier;
-(id)fileNameRaw;
-(void)setFileNameRaw:(id)arg1 ;
-(void)setIsBinary:(BOOL)arg1 ;
-(void)setLocalRelativePath:(NSString *)arg1 ;
-(id)XPropertiesData;
-(void)setXPropertiesData:(id)arg1 ;
-(NSURL *)URLForPendingFileCopy;
-(void)setURLForPendingFileCopy:(NSURL *)arg1 ;
-(id)initWithFilepath:(id)arg1 ;
-(long long)compareFileNames:(id)arg1 ;
@end

