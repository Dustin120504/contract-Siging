//
//  HContractViewController.h
//  hermes
//
//  Created by Zhen Huang on 2020/8/5.
//  Copyright © 2020 James. All rights reserved.
//


NS_ASSUME_NONNULL_BEGIN
typedef void(^HContractCallBackSuccess)(void);
typedef void(^HContractCallBackFail)(void);
@interface HContractViewController : UIViewController
@property (nonatomic ,copy) NSString *orderNo;
@property (nonatomic ,copy) HContractCallBackSuccess ContractCallBackSuccess;
@property (nonatomic ,copy) HContractCallBackFail ContractCallBackFail;
@end

NS_ASSUME_NONNULL_END


