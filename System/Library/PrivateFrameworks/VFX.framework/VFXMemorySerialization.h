/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VFX.framework/VFX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VFX/VFX-Structs.h>
@interface VFXMemorySerialization : NSObject
+(BOOL)readBool:(void*)arg1 ;
+(void)writeBool:(BOOL)arg1 to:(void*)arg2 ;
+(unsigned char)readUInt8:(void*)arg1 ;
+(void)writeUInt8:(unsigned char)arg1 to:(void*)arg2 ;
+(unsigned short)readUInt16:(void*)arg1 ;
+(void)writeUInt16:(unsigned short)arg1 to:(void*)arg2 ;
+(unsigned)readUInt32:(void*)arg1 ;
+(void)writeUInt32:(unsigned)arg1 to:(void*)arg2 ;
+(unsigned long long)readUInt64:(void*)arg1 ;
+(void)writeUInt64:(unsigned long long)arg1 to:(void*)arg2 ;
+(long long)readInt:(void*)arg1 ;
+(void)writeInt:(long long)arg1 to:(void*)arg2 ;
+(char)readInt8:(void*)arg1 ;
+(void)writeInt8:(char)arg1 to:(void*)arg2 ;
+(short)readInt16:(void*)arg1 ;
+(void)writeInt16:(short)arg1 to:(void*)arg2 ;
+(int)readInt32:(void*)arg1 ;
+(void)writeInt32:(int)arg1 to:(void*)arg2 ;
+(long long)readInt64:(void*)arg1 ;
+(void)writeInt64:(long long)arg1 to:(void*)arg2 ;
+(double)readDouble:(void*)arg1 ;
+(void)writeDouble:(double)arg1 to:(void*)arg2 ;
+(float)readFloat:(void*)arg1 ;
+(void)writeFloat:(float)arg1 to:(void*)arg2 ;
+(2)readSIMD2F:(void*)arg1 ;
+(void)writeSIMD2F:(void*)arg1 ;
+(2)readSIMD3F:(void*)arg1 ;
+(void)writeSIMD3F:(void*)arg1 ;
+(2)readSIMD4F:(void*)arg1 ;
+(void)writeSIMD4F:(void*)arg1 ;
+(SCD_Struct_VF0)readSIMD3x3F:(void*)arg1 ;
+(void)writeSIMD3x3F:(SCD_Struct_VF0)arg1 to:(void*)arg2 ;
+(SCD_Struct_VF1)readSIMD4x4F:(void*)arg1 ;
+(void)writeSIMD4x4F:(SCD_Struct_VF1)arg1 to:(void*)arg2 ;
+(2)readSIMD2D:(void*)arg1 ;
+(void)writeSIMD2D:(void*)arg1 ;
+(2)readSIMD3D:(void*)arg1 ;
+(void)writeSIMD3D:(void*)arg1 ;
+(2)readSIMD4D:(void*)arg1 ;
+(void)writeSIMD4D:(void*)arg1 ;
+(SCD_Struct_VF0)readSIMD3x3D:(void*)arg1 ;
+(void)writeSIMD3x3D:(SCD_Struct_VF0)arg1 to:(void*)arg2 ;
+(SCD_Struct_VF1)readSIMD4x4D:(void*)arg1 ;
+(void)writeSIMD4x4D:(SCD_Struct_VF1)arg1 to:(void*)arg2 ;
+(int)VFXSerializedBufferSize:(void*)arg1 type:(long long)arg2 ;
+(id)readString:(void*)arg1 ;
+(void)writeString:(id)arg1 to:(void*)arg2 ;
-(id)init;
@end

