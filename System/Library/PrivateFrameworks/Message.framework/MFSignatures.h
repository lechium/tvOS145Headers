/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MFSignatures : NSObject
+(id)sharedInstance;
+(id)signatureMarkupFormat:(id)arg1 ;
+(id)signaturePlainTextFormat:(id)arg1 ;
+(id)stripSignatureMarkup:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)signature;
-(void)setSignature:(id)arg1 ;
-(id)_modelSpecificLocalizedStringKeyForKey:(id)arg1 ;
-(id)_getValue:(id)arg1 ;
-(id)defaultSignature;
-(void)_setValue:(id)arg1 value:(void*)arg2 ;
-(id)signatureForAccount:(id)arg1 ;
-(BOOL)useAccountSignatures;
-(void)setSignature:(id)arg1 forAccount:(id)arg2 ;
-(id)signatureForSendingEmailAddress:(id)arg1 ;
-(void)clearSignature;
-(void)setUseAccountSignatures:(BOOL)arg1 ;
-(void)setSignature:(id)arg1 forEmailAddress:(id)arg2 ;
-(id)signatureMarkupForSendingEmailAddress:(id)arg1 ;
-(id)signaturePlainTextForSendingEmailAddress:(id)arg1 ;
@end

