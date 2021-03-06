/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <DistributedEvaluation/DistributedEvaluation-Structs.h>
@interface DESSignatureKey : NSObject {

	SecKeyRef _key;

}
+(void)initialize;
+(SecKeyRef)keyFromCertificateChain:(id)arg1 ;
+(id)keyFromData:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithKey:(SecKeyRef)arg1 ;
-(BOOL)validateBase64Signature:(id)arg1 data:(id)arg2 algorithm:(CFStringRef)arg3 ;
-(BOOL)validateSignature:(id)arg1 data:(id)arg2 algorithm:(CFStringRef)arg3 ;
-(BOOL)validateBase64Signature:(id)arg1 data:(id)arg2 ;
@end

