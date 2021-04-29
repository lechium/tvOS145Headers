/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AssistantServices/AssistantServices-Structs.h>
@class NSMutableDictionary, NSLocale;

@interface AFSpeakableUtteranceParser : NSObject {

	NSMutableDictionary* _providers;
	id _functionHandler;
	NSLocale* _locale;

}

@property (assign,nonatomic) BOOL handleTTSCodes; 
@property (assign,nonatomic) BOOL handlesFunctions; 
+(BOOL)_shouldAutomaticallyProvideFunctions;
+(id)parseUserGeneratedMessage:(id)arg1 ;
-(id)init;
-(id)initWithLocale:(id)arg1 ;
-(void)setHandlesFunctions:(BOOL)arg1 ;
-(void)registerProvider:(id)arg1 forNamespace:(id)arg2 ;
-(BOOL)handleTTSCodes;
-(BOOL)handlesFunctions;
-(id)_parseStringWithFormat:(id)arg1 error:(id*)arg2 hadEmpties:(BOOL*)arg3 containsPrivacySensitiveContents:(BOOL*)arg4 externalProviders:(BOOL*)arg5 ;
-(id)parseStringWithFormat:(id)arg1 includeControlCharacters:(BOOL)arg2 error:(id*)arg3 hadEmpties:(BOOL*)arg4 containsPrivacySensitiveContents:(BOOL*)arg5 externalProviders:(BOOL*)arg6 ;
-(id)_handleOptionalAtIndex:(unsigned)arg1 withBuffer:(SCD_Struct_AF5*)arg2 totalLength:(unsigned long long)arg3 consumedLength:(unsigned*)arg4 containsPrivacySensitiveContents:(BOOL*)arg5 externalProviders:(BOOL*)arg6 ;
-(id)_handleProviderAtIndex:(unsigned)arg1 withBuffer:(SCD_Struct_AF5*)arg2 totalLength:(unsigned long long)arg3 consumedLength:(unsigned*)arg4 containsPrivacySensitiveContents:(BOOL*)arg5 hadEmpties:(BOOL*)arg6 externalProviders:(BOOL*)arg7 ;
-(id)_handleControlCodeAtIndex:(unsigned)arg1 withBuffer:(SCD_Struct_AF5*)arg2 totalLength:(unsigned long long)arg3 consumedLength:(unsigned*)arg4 hadEmpties:(BOOL*)arg5 containsPrivacySensitiveContents:(BOOL*)arg6 externalProviders:(BOOL*)arg7 ;
-(id)parseStringWithFormat:(id)arg1 error:(id*)arg2 hasExternalDomains:(BOOL*)arg3 ;
-(id)parseStringWithFormat:(id)arg1 error:(id*)arg2 containsPrivacySensitiveContents:(BOOL*)arg3 hasExternalDomains:(BOOL*)arg4 ;
-(void)setHandleTTSCodes:(BOOL)arg1 ;
-(id)parseStringWithFormat:(id)arg1 error:(id*)arg2 ;
-(id)parseStringWithFormat:(id)arg1 error:(id*)arg2 containsPrivacySensitiveContents:(BOOL*)arg3 ;
-(id)parseStringRemovingControlCharacters:(id)arg1 error:(id*)arg2 ;
-(id)parseStringRemovingControlCharacters:(id)arg1 error:(id*)arg2 containsPrivacySensitiveContents:(BOOL*)arg3 ;
@end

