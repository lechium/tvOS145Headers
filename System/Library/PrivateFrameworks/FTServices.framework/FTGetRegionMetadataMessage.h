/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FTServices/FTServices-Structs.h>
#import <IDSFoundation/IDSBaseMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface FTGetRegionMetadataMessage : IDSBaseMessage <NSCopying> {

	NSString* _language;
	NSDictionary* _responseRegionInformation;

}

@property (copy) NSString * language;                                   //@synthesize language=_language - In the implementation block
@property (copy) NSDictionary * responseRegionInformation;              //@synthesize responseRegionInformation=_responseRegionInformation - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(long long)command;
-(id)requiredKeys;
-(id)messageBody;
-(BOOL)wantsHTTPHeaders;
-(long long)responseCommand;
-(BOOL)wantsBinaryPush;
-(BOOL)wantsCompressedBody;
-(BOOL)wantsHTTPGet;
-(BOOL)wantsBagKey;
-(id)bagKey;
-(void)handleResponseDictionary:(id)arg1 ;
-(NSDictionary *)responseRegionInformation;
-(void)setResponseRegionInformation:(NSDictionary *)arg1 ;
@end
