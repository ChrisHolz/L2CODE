/*  Selecionar o nome, dia do mês e valor da parcela para clientes que estão inadimplentes */

select PESSOAS.NOME , CONTRATOS.VALOR_PARCELA, PAGAMENTOS.DT_PAGAMENTO
from PESSOAS inner join CONTRATOS inner join PAGAMENTOS
on PESSOAS.CONTRATO_ID = CONTRATOS.ID, PESSOAS.ID = PAGAMENTOS.PESSOA_ID
where PESSOAS.INADIPLENTE = "S" 



/* Selecionar o nome e valor total pago de clientes com pagamento completo */

select PESSOAS.NOME , CONTRATOS.VALOR_PARCELA * CONTRATOS.PARCELAS
from PESSOAS inner join CONTRATOS
on PESSOAS.CONTRATO_ID = CONTRATOS.ID
where PESSOAS.DT_COMPLETO != "NULL" 